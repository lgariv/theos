//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKCanvasView;

@protocol PKCanvasViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)canvasViewDidEndUsingTool:(PKCanvasView *)arg1;
- (void)canvasViewDidBeginUsingTool:(PKCanvasView *)arg1;
- (void)canvasViewDidFinishRendering:(PKCanvasView *)arg1;
- (void)canvasViewDrawingDidChange:(PKCanvasView *)arg1;
@end

