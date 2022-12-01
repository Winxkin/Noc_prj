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
    work_m_00000000003821111172_3838078771_init();
    work_m_00000000000919525111_1894719351_init();
    work_m_00000000000357774408_0125805369_init();
    work_m_00000000002229307798_1470087833_init();
    work_m_00000000000140323377_1611793239_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000140323377_1611793239");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
