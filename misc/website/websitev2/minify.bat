@echo off
rem install node.js and then run:
rem npm install -g clean-css
rem npm install -g uglify-js

pushd %~dp0

rem echo minifying and combining css and js files...
echo minifying js files...
rem type css\jquery.fancybox.css css\stylesheet.css | cleancss --s0 -o css\pack.css
cmd /c uglifyjs js\jquery.fancybox.js --compress --mangle -o js\jquery.fancybox.min.js

popd
