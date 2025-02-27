#include "test.h"


lv_obj_t* sw1;
void event_handler(lv_obj_t* obj,lv_event_t event)
{
    if(obj == sw1)
    {
        if(event == LV_EVENT_VALUE_CHANGED)
        {
            printf("״̬:%d\n",lv_sw_get_state(sw1));
        }

    }
}


void test_start()
{
    lv_obj_t* scr = lv_scr_act();
    sw1 = lv_sw_create(scr,NULL);
    lv_obj_set_size(sw1,100,40);
    lv_obj_align(sw1,NULL,LV_ALIGN_CENTER,0,0);
    lv_sw_on(sw1,LV_ANIM_ON);
    lv_obj_set_event_cb(sw1,event_handler);
}
