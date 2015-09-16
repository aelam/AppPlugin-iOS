# AppPlugin-iOS
AppPlugin-iOS

# What is it for?
Decouple App modules just work as Django do.

Before you start a new module,  you need configure some parameters then follow the routine, when you finish this module, you'll say it's already decoupled.

# Every module contains 
* A module name, version, and some other simple parameters 
* URLPatterns: this App URls are mapping to speficied controllers, then after `AppModuleLoader` load it. you can use url to route pages.
* JSModule (Optional) : every module can have a separated js methods group. After loaded, WebViewController will load them all. you can use it to configure menuItems and actions. and actions can map to routing pages 
* podspec: it will make it easy to make modules working together. 
* 
 
# ModuleLoader 

It can load/unload modules as you need. 
It doens't mean you can download the module dynamicly to update app, maybe later.
