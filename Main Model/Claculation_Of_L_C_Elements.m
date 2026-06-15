clc;
clear;

fprintf("PV and Boost Converter Parameters\n");

%% PV Parameters
v_mp = 20;
i_mp = 2.51;

nv_PV = 0.975;
ni_PV = 0.977;
np_PV = 0.953;

fprintf('V_mp : %.3f V\n', v_mp);
fprintf('I_mp : %.3f A\n', i_mp);

cell_p = input("Enter the number of parallel PV modules : ");
cell_s = input("Enter the number of series PV modules : ");

v_in_PV = v_mp * cell_s;
i_in_PV = i_mp * cell_p;

p_in_PV = v_in_PV * i_in_PV;
p_out_PV = p_in_PV * np_PV;

fprintf('V_in : %.3f V\n', v_in_PV);
fprintf('I_in : %.3f A\n', i_in_PV);
fprintf('P_in : %.3f W\n', p_in_PV);
fprintf('P_out: %.3f W\n', p_out_PV);

%% Boost Converter Design

fsw_PV = input("Enter the switching frequency (Hz) : ");
v_out = input("Enter the required DC bus voltage (V) : ");

del_iL_p_PV = input("Enter inductor current ripple (%) : ");
del_vout_PV = input("Enter output voltage ripple (V) : ");

iL_PV = p_in_PV / v_in_PV;

del_iL_PV = iL_PV * (del_iL_p_PV / 100);

v_out_DC = v_out + (v_out * (1 - nv_PV));

ini_duty_PV = 1 - (v_in_PV / v_out_DC);

R_load = (v_out_DC^2) / p_out_PV;

L_PV = (v_in_PV * ini_duty_PV) / ...
       (del_iL_PV * fsw_PV);

C_PV = (v_in_PV * ini_duty_PV) / ...
       (del_vout_PV * (1 - ini_duty_PV) * R_load * fsw_PV);

%% Battery and Bidirectional Converter

fprintf("\nBattery and Bidirectional Converter Parameters\n");

v_bat = input("Enter nominal battery voltage (V) : ");
bat_cap = input("Enter battery capacity (Ah) : ");
SOC = input("Enter initial battery SOC (%) : ");

del_vout_BESS = del_vout_PV;
del_iL_p_BESS = del_iL_p_PV;

fsw_BESS = fsw_PV;

p_in_BESS = p_out_PV;

ini_duty_BESS_buck = v_bat / v_out_DC;

%% Battery Current

I_bat = p_in_BESS / v_bat;

%% Ripple Current Based on Battery Current

del_iL_BESS = I_bat * (del_iL_p_BESS / 100);

%% BESS Inductor

L_BESS = (v_out_DC * ...
          (1 - ini_duty_BESS_buck) * ...
          ini_duty_BESS_buck) / ...
          (del_iL_BESS * fsw_BESS);

%% Battery Side Capacitor

C_bat_BESS = ...
(v_out_DC * ...
(1 - ini_duty_BESS_buck) * ...
ini_duty_BESS_buck) / ...
(8 * L_BESS * del_vout_BESS * fsw_BESS^2);

%% Save Readable Data

fileID = fopen('Readable_Parameter_Data.txt','w');

fprintf(fileID,"===================================\n");
fprintf(fileID,"PV and Boost Converter Parameters\n");
fprintf(fileID,"===================================\n");

fprintf(fileID,"Maximum power point voltage : %.3f Volt\n",v_in_PV);
fprintf(fileID,"Maximum power point current : %.3f A\n",i_in_PV);
fprintf(fileID,"Maximum input solar power : %.3f Watt\n",p_in_PV);
fprintf(fileID,"PV output power : %.3f Watt\n",p_out_PV);

fprintf(fileID,"Actual DC bus voltage used : %.3f Volt\n",v_out_DC);

fprintf(fileID,"Boost converter switching frequency : %.3f Hz\n",fsw_PV);

fprintf(fileID,"Calculated initial duty cycle for MPPT : %.6f\n",ini_duty_PV);

fprintf(fileID,"Calculated inductor value for boost converter : %.6f H\n",L_PV);

fprintf(fileID,"Calculated capacitor value for boost converter : %.6f F\n",C_PV);

fprintf(fileID,"Calculated minimum load resistance : %.6f Ohm\n\n",R_load);

fprintf(fileID,"================================================\n");
fprintf(fileID,"Battery and Bidirectional Converter Parameters\n");
fprintf(fileID,"================================================\n");

fprintf(fileID,"Battery nominal voltage : %.3f Volt\n",v_bat);
fprintf(fileID,"Battery capacity : %.3f Ah\n",bat_cap);

fprintf(fileID,"Battery current : %.3f A\n",I_bat);

fprintf(fileID,"Bidirectional converter switching frequency : %.3f Hz\n",fsw_BESS);

fprintf(fileID,"Calculated initial duty cycle for BESS : %.6f\n",ini_duty_BESS_buck);

fprintf(fileID,"Calculated inductor value for bidirectional converter : %.6f H\n",L_BESS);

fprintf(fileID,"Calculated battery side capacitor value : %.9f F\n",C_bat_BESS);

fprintf(fileID,"Calculated DC bus side capacitor value : %.6f F\n",C_PV);

fclose(fileID);

%% Save Required Variables Only

save('Model_Parameter_Data.mat', ...
    'v_in_PV', ...
    'i_in_PV', ...
    'p_in_PV', ...
    'p_out_PV', ...
    'v_out_DC', ...
    'L_PV', ...
    'C_PV', ...
    'R_load', ...
    'v_bat', ...
    'I_bat', ...
    'L_BESS', ...
    'C_bat_BESS', ...
    'ini_duty_PV', ...
    'ini_duty_BESS_buck', ...
    'SOC');

%% Run Model

run SmartGrid.slx