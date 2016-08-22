# react-native-watermark
react-native interface to create watermarks on videos and/or images(iOS)

Credit: [https://www.raywenderlich.com/30200/avfoundation-tutorial-adding-overlays-and-animations-to-videos](https://www.raywenderlich.com/30200/avfoundation-tutorial-adding-overlays-and-animations-to-videos)

## Getting started

1. `npm install react-native-watermark@latest --save`
2. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
3. Go to `node_modules` ➜ `react-native-watermark` and add `RNWatermark.xcodeproj`
4. In XCode, in the project navigator, select your project. Add `libRNWatermark.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
5. Click `RNWatermark.xcodeproj` in the project navigator and go the `Build Settings` tab. Make sure 'All' is toggled on (instead of 'Basic'). Look for `Header Search Paths` and make sure it contains both `$(SRCROOT)/../../react-native/React` and `$(SRCROOT)/../../../React` - mark both as `recursive`.
6. Run your project (`Cmd+R`)


## Usage

```javascript
```
