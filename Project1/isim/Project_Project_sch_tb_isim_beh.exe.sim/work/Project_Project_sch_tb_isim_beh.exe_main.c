/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001370084618_4254059952_init();
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000003317509437_1759035934_init();
    unisims_ver_m_00000000003510477262_0709700939_init();
    unisims_ver_m_00000000002123152668_3476364530_init();
    work_m_00000000000029229319_0005568665_init();
    unisims_ver_m_00000000002549801008_4245414866_init();
    unisims_ver_m_00000000003149700083_1668249201_init();
    unisims_ver_m_00000000001762375489_3501834183_init();
    work_m_00000000002208897199_3755049937_init();
    unisims_ver_m_00000000000924517765_3125220529_init();
    unisims_ver_m_00000000002123152668_0970595058_init();
    work_m_00000000004163320202_2078561662_init();
    unisims_ver_m_00000000000236260522_2449448540_init();
    work_m_00000000003380130463_3099920514_init();
    work_m_00000000001082437217_1539067236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001082437217_1539067236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
