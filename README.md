# Super Mario 64 EFI Port

This is a novelty port of the sm64-port to EFI. Do not expect it to be playable.

## Notes:

For *best* performance:
 - Use `ENABLE_OPENGL_LEGACY=1` to enable the legacy OpenGL renderer
 - Use `DOS_GL=dmesa` to enable 3Dfx-backed OpenGL instead of software-backed (this only works with legacy OpenGL!)
 - Set `draw_sky` to `false` in `SM64CONF.TXT` to avoid drawing the skybox (saves a lot of cycles in software mode)
 - Set `texture_filtering` to `false` in `SM64CONF.TXT` to disable linear filtering (saves a lot of cycles in software mode)
 - Set `enable_sound` to `false` in `SM64CONF.TXT` to disable sound (saves your ears from an untimely death and some cycles too)
 - Set `enable_fog` to `false` to disable fog (saves a tiny bit)

You can change the maximum amount of skipped frames by changing `frameskip` in `SM64CONF.TXT`.

You can change the resolution by changing `screen_width`, `screen_height`.

In software mode the only resolutions that will work are 320x200 (mode 13h) and 320x240 (mode X).
In 3DFX mode the list of supported resolutions depends on the card, 640x480 is a safe value.

Use `ENABLE_SOFTRAST=1` to enable the experimental custom software renderer. It can be faster than `DOS_GL=osmesa` in some cases, but might be much more buggy.


## Controls

Controls can be edited as per the PC port, tweak the `SM64CONF.TXT` which is created with defaults upon first run.

## Project Structure

```
sm64
├── actors: object behaviors, geo layout, and display lists
├── asm: handwritten assembly code, rom header
│   └── non_matchings: asm for non-matching sections
├── assets: animation and demo data
│   ├── anims: animation data
│   └── demos: demo data
├── bin: C files for ordering display lists and textures
├── build: output directory
├── data: behavior scripts, misc. data
├── doxygen: documentation infrastructure
├── enhancements: example source modifications
├── include: header files
├── levels: level scripts, geo layout, and display lists
├── lib: SDK library code and third party libraries
├── rsp: audio and Fast3D RSP assembly code
├── sound: sequences, sound samples, and sound banks
├── src: C source code for game
│   ├── audio: audio code
│   ├── buffers: stacks, heaps, and task buffers
│   ├── engine: script processing engines and utils
│   ├── game: behaviors and rest of game source
│   ├── goddard: Mario intro screen
│   ├── menu: title screen and file, act, and debug level selection menus
│   └── pc: port code, audio and video renderer
├── text: dialog, level names, act names
├── textures: skybox and generic texture data
└── tools: build tools
```

## Credits

 - [mkst](https://github.com/mkst): initial DOS port
 - [Bisqwit](http://bisqwit.iki.fi/): DJGPP OSMesa binaries, dithering code
 - [Q2DOS project](https://bitbucket.org/neozeed/q2dos/src/master/): FXMesa/DMesa binaries and code

## Contributing

Pull requests are welcome. For major changes, please open an issue first to
discuss what you would like to change.

Official Discord: https://discord.gg/7bcNTPK
