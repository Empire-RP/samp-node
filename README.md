# samp-node
samp-node is a SA-MP plugin that allows you to run Node.js, meaning you can code in JS/TS instead of pawn.

---------

Todo: 
- [ ] Add samp constant values (eg: INVALID_PLAYER_ID, MAX_TEXT_DRAWS, and etc...)


## Download
You can always find latest builds [here](https://github.com/AmyrAhmady/samp-node/actions?query=workflow%3A%22Build+CI%22)\
But if you are looking for a stable version (or using sampctl), please visit [here](https://github.com/AmyrAhmady/samp-node/wiki/Installation)


## Node version
Currently samp-node uses Node.js v16.


## Tips
You should transpile your JS into commonjs to avoid issues. \
It's recommended you use TypeScript and setup a tsconfig that extends [@tsconfig/node16](https://www.npmjs.com/package/@tsconfig/node16).


## Type definitions for TypeScript
If you're using TypeScript then take a look at this repoistory: https://github.com/samp-dev/node \
Instructions can be found there on how to install and use them. \
*Special thanks to [pkfln (peek)](https://github.com/pkfln).*


## Credits
- [Damo](https://github.com/damopewpew) for his [samp.js project](https://github.com/damopewpew/samp.js). 80% of native caller code is from that project, cause I didn't want to do all the args processing by myself when there's already something useful out there!
- [Hual](https://github.com/Hual/) for some v8 tips he gave me
- [Graber](https://github.com/AGraber) for a few suggestions and helpful advices
- [pkfln (peek)](https://github.com/pkfln) for fixing and adding some samp callbacks/events in samp-node, and making [@sa-mp/node](https://github.com/samp-dev/node)
- [polygxn](https://github.com/polygxn) for his changes in README.md which don't exist anymore
- [JustMichael (ADRFranklin)](https://github.com/ADRFranklin) for his contributions, including fixes, features, and any others he's going to do in future
- [Alexander Plutalov (plutalov)](https://github.com/plutalov) for fixing long time crash issues and not having context running properly
- [iAmir (Amyr Aahmady)](https://github.com/AmyrAhmady) that's me.
