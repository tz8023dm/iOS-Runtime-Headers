/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    UIButton * _button;
    unsigned int  _buttonBehavior;
    UIImageView * _imageView;
    int  _state;
    <MKUserTrackingButtonTarget> * _target;
    <MKUserTrackingView> * _userTrackingView;
}

@property (nonatomic) unsigned int buttonBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MKUserTrackingView> *userTrackingView;

- (void).cxx_destruct;
- (id)_activityIndicatorView;
- (void)_authorizationStatusChanged:(id)arg1;
- (id)_contentAnimation;
- (id)_expandAnimation;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
- (void)_reloadState;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (id)_shrinkAnimation;
- (void)_updateLoading;
- (void)_updateState;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (unsigned int)buttonBehavior;
- (void)dealloc;
- (id)imageView;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;
- (void)setButtonBehavior:(unsigned int)arg1;
- (void)setState:(int)arg1;
- (void)setUserTrackingView:(id)arg1;
- (int)state;
- (id)userTrackingView;

@end
