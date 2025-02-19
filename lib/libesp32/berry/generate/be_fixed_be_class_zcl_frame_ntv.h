#include "be_constobj.h"

static be_define_const_map_slots(be_class_zcl_frame_ntv_map) {
    { be_const_key(_def, -1), be_const_comptr(&be_zigbee_zcl_frame_struct) },
};

static be_define_const_map(
    be_class_zcl_frame_ntv_map,
    1
);

BE_EXPORT_VARIABLE be_define_const_class(
    be_class_zcl_frame_ntv,
    0,
    (bclass *)&be_class_ctypes_bytes,
    zcl_frame_ntv
);
