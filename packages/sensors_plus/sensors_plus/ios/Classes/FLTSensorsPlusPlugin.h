// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Flutter/Flutter.h>

@interface FLTSensorsPlusPlugin : NSObject <FlutterPlugin>
@end

@interface FLTUserAccelStreamHandlerPlus : NSObject <FlutterStreamHandler>
@end

@interface FLTAccelerometerStreamHandlerPlus : NSObject <FlutterStreamHandler>
@end

@interface FLTGyroscopeStreamHandlerPlus : NSObject <FlutterStreamHandler>
@end

@interface FLTMagnetometerStreamHandlerPlus : NSObject <FlutterStreamHandler>
@end

@interface FLTSensorEnabler : NSObject <FlutterStreamHandler>
@end

@interface FLTSensorDisabler : NSObject <FlutterStreamHandler>
@end
