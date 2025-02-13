#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "game/level_geo.h"
#include "game/geo_misc.h"
#include "game/camera.h"
#include "game/moving_texture.h"
#include "game/screen_transition.h"
#include "game/paintings.h"

#include "make_const_nonconst.h"

#include "levels/castle_inside/header.h"

#include "levels/castle_inside/star_door/geo.inc.c"
#include "levels/castle_inside/trap_door/geo.inc.c"
#include "levels/castle_inside/areas/1/geo.inc.c"
#include "levels/castle_inside/areas/2/pendulum/geo.inc.c" // Another weird case
#include "levels/castle_inside/clock_minute_hand/geo.inc.c"
#include "levels/castle_inside/clock_hour_hand/geo.inc.c"
#include "levels/castle_inside/areas/2/geo.inc.c"
#include "levels/castle_inside/water_level_pillar/geo.inc.c"
#include "levels/castle_inside/areas/3/geo.inc.c"
#include "levels/castle_inside/arrow_platform/geo.inc.c"
#include "levels/castle_inside/arrow_platform_button/geo.inc.c"

#include "levels/castle_inside/square_floating_platform/geo.inc.c"

#include "levels/castle_inside/geo.inc.c"

#include "levels/castle_inside/warrow/geo.inc.c"
#include "levels/castle_inside/arrow_lift/geo.inc.c"
#include "levels/castle_inside/water_level_diamond/geo.inc.c"

#include "levels/castle_inside/wdroplet/geo.inc.c"
#include "levels/castle_inside/death_penguin/geo.inc.c"