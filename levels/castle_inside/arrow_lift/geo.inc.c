// 0x0E000598
extern const Gfx wdw_seg7_dl_07012E88[];
const GeoLayout wdw_geo_000598[] = {
   GEO_CULLING_RADIUS(350),
   GEO_OPEN_NODE(),
      GEO_SHADOW(SHADOW_SQUARE_TOGGLABLE, 0x96, 110),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_OPAQUE, wdw_seg7_dl_07012E88),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
