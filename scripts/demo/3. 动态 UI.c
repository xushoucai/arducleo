/*----------------------------------------------------------------------------
 * Cardpad 演示脚本
 * ---------------------------------------
 * 
 * 1. 包含子脚本，以使用其中的 UI 资源
 * 2. 实现欢迎界面
 *
 * 限制: 简单的交互功能
 *
 * by 渝武陶 (y.volta@mail.com)
 * rev 1.0.0, $$ 2011/09/12 06:19:36  $$
 *---------------------------------------------------------------------------*/

// 包含资源文件
#include "../libs/ui_demo1.c"
 
cls;


////////////////////////////////////////////////////////////////////////////////
// 按钮回调处理
void btnOK_Click ()
{
    char *name   = ui_gettext ("txtName");
    int sex_man  = ui_getint ("rbMan");
    
    if (sex_man)
        printf ("尊敬的 %s 先生，\n  欢迎使用 Cardpad 2011！\n", name);
    else
        printf ("尊敬的 %s 女士，\n  欢迎使用 Cardpad 2011！\n", name);
        
    ui_close ();
}

////////////////////////////////////////////////////////////////////////////////
// 初始化 UI
ui_open (ui_demo_welcome, 1);


/* --------------------------------------------- end-of-script ---------------*/
