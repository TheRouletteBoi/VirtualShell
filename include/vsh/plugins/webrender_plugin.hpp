#ifndef __WEBRENDER_PLUGIN_HPP__
#define __WEBRENDER_PLUGIN_HPP__

// Interface Id 1
class WebRenderPluginInterface
{
public:
    int (*DoUnk3)(void);

};

// Interface ACT0
class WebRenderAct0Interface
{
public:
    int (*Action)(const char *);
}; 

// Interface MOD0
class webrender_plugin_mod0
{
public:
    int (*DoUnk0)(void);
    int (*DoUnk1)(void);
    int (*DoUnk2)(void);
    int (*DoUnk3)(void);
    int (*DoUnk4)(void);
};

#endif // __WEBRENDER_PLUGIN_HPP__