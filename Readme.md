# std::function - a deep dive behind the curtain

Presentation for [Meeting C++ 2022](https://meetingcpp.com/2022) (17.-19. November 2022 in Berlin)

## Slides

View slides: [https://arbmind.github.io/2022-function-en](https://arbmind.github.io/2022-function-en)

## Example Code

The `code/` Folder contains some examples used in the presentation.

For compilation a C++20 capable compiler and the [QBS](https://github.com/qbs/qbs) build system is used. It should be easy read if you use something else.

*Warning:* All the code is for learning and demonstration purposes only and has no production quality.
Especially the slide code is aimed to fit on slides and lacks a lot of best practices.

## Slide Technology

* [AsciiDoctor](https://github.com/asciidoctor/asciidoctor) as hackable html slide generator with a lot of features
* [Bespoke.js](https://github.com/bespokejs/bespoke) as a flexible html slide framework
* [Patched AsciiDoctor-Bespoke](https://github.com/arBmind/asciidoctor-bespoke/tree/patch-1) that allows the nested code display
* [Patched Bespoke-Bullets](https://github.com/arBmind/bespoke-bullets) to allow better interactions through API
* [Patched Bespoke-Hash](https://github.com/arBmind/bespoke-hash) that uses the extended bullets API
* [Patched Bespoke-OnStage](https://github.com/arBmind/bespoke-onstage) with some customizations and fixes for my setup
* [Gulp](https://github.com/gulpjs/gulp) to automate regeneration and push slide updates to the browser
* [Docker-Compose](https://docs.docker.com/compose/) is used to ease the setup during slide development

## License

The slides here are available under the terms of the Creative Commons Attribution-ShareAlike license.
[(cc-by-sa-license)](https://creativecommons.org/licenses/by-sa/2.0/)

### Used Pictures

* [Bit Boy: The Elephant in the room](https://flic.kr/p/nNWNY) [(cc-by-sa-license)](https://creativecommons.org/licenses/by-sa/2.0)
* [Farley Santos: Sonic ambilibo](https://flic.kr/p/vtxD4A) [(cc-by-sa-license)](https://creativecommons.org/licenses/by-sa/2.0)
* [Mike's Birds: Hummingbird](https://flic.kr/p/25A4Ah3) [(cc-by-sa-license)](https://creativecommons.org/licenses/by-sa/2.0)
