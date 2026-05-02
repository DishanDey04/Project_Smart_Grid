clc
clear
fprintf("PV and boost converter parameters\n");
v_mp = 30.1;
i_mp = 8.3;
nv_PV = 0.975; ni_PV = 0.977; np_PV = 0.953;
fprintf('V_mp : %f\n', v_mp);
fprintf('I_mp : %f\n', i_mp);
cell_p = input("Enter the No. of parallel cell in the module : ");
cell_s = input("Enter the No. of series cell in the module : ");
v_in_PV = v_mp * cell_s;
i_in_PV = i_mp * cell_p;
p_in_PV = v_in_PV * i_in_PV;
p_out_PV = p_in_PV * np_PV;
fprintf('V_in: %.3f I_in: %.3f P_in: %.3f P_out: %.3f\n', v_in_PV,i_in_PV,p_in_PV,p_out_PV);
fsw_PV = input("Enter the switching frequency : ");
v_out_DC = input("Enter the required output voltage : ");
del_iL_p_PV = input("Enter the inductor corrent ripple in percentage : ");
del_vout_PV = input("Enter the output voltage ripple : ");
iL_PV = p_in_PV/v_in_PV;
del_iL_PV = iL_PV * (del_iL_p_PV / 100);
v_out_DC = v_out_DC + (v_out_DC * (1 - nv_PV));
ini_duty_PV = 1 - (v_in_PV/v_out_DC);
R_load = (v_out_DC * v_out_DC) / p_out_PV;
L_PV = (v_in_PV * ini_duty_PV) / (del_iL_PV * fsw_PV);
C_PV = (v_in_PV * ini_duty_PV) / (del_vout_PV * (1 - ini_duty_PV) * R_load * fsw_PV);
fprintf("Battery and Bidirectional converter parameters\n");
v_bat = input("Enter nominal cell voltage : ");
bat_cap = input("Enter battery capacity(Ah) : ");
del_vout_BESS = del_vout_PV;
del_iL_p_BESS = del_iL_p_PV;
save("Model_Parameter_Data.mat")
run SmartGrid.slx