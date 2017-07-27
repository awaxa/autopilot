// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.54.11 clang-900.0.31)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("SwiftCharts")
@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC11SwiftCharts14ChartAreasView")
@interface ChartAreasView : UIView
- (nonnull instancetype)initWithPoints:(NSArray<NSValue *> * _Nonnull)points frame:(CGRect)frame colors:(NSArray<UIColor *> * _Nonnull)colors animDuration:(float)animDuration animDelay:(float)animDelay OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIPinchGestureRecognizer;
@class UIPanGestureRecognizer;
@class UITapGestureRecognizer;

SWIFT_CLASS("_TtC11SwiftCharts9ChartView")
@interface ChartView : UIView <UIGestureRecognizerDelegate>
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Initialization code shared between all initializers
- (void)sharedInit;
- (void)onPinch:(UIPinchGestureRecognizer * _Nonnull)sender;
- (void)onPan:(UIPanGestureRecognizer * _Nonnull)sender;
- (void)onTap:(UITapGestureRecognizer * _Nonnull)sender;
@end


/// A UIView subclass for drawing charts
SWIFT_CLASS("_TtC11SwiftCharts13ChartBaseView")
@interface ChartBaseView : ChartView
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11SwiftCharts20ChartCandleStickView")
@interface ChartCandleStickView : UIView
@property (nonatomic) BOOL highlighted;
- (nonnull instancetype)initWithLineX:(CGFloat)lineX width:(CGFloat)width top:(CGFloat)top bottom:(CGFloat)bottom innerRectTop:(CGFloat)innerRectTop innerRectBottom:(CGFloat)innerRectBottom fillColor:(UIColor * _Nonnull)fillColor strokeColor:(UIColor * _Nonnull)strokeColor strokeWidth:(CGFloat)strokeWidth OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SwiftCharts16ChartContentView")
@interface ChartContentView : UIView
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// Convenience class to store common properties and make protocol’s methods optional
SWIFT_CLASS("_TtC11SwiftCharts14ChartLayerBase")
@interface ChartLayerBase : NSObject
- (void)update;
- (void)zoom:(CGFloat)x y:(CGFloat)y centerX:(CGFloat)centerX centerY:(CGFloat)centerY;
- (void)zoom:(CGFloat)scaleX scaleY:(CGFloat)scaleY centerX:(CGFloat)centerX centerY:(CGFloat)centerY;
- (void)pan:(CGFloat)deltaX deltaY:(CGFloat)deltaY;
- (BOOL)processPanWithLocation:(CGPoint)location deltaX:(CGFloat)deltaX deltaY:(CGFloat)deltaY isGesture:(BOOL)isGesture isDeceleration:(BOOL)isDeceleration SWIFT_WARN_UNUSED_RESULT;
- (void)handlePanStart:(CGPoint)location;
- (void)handlePanFinish;
- (void)handleZoomFinish;
- (void)handlePanEnd;
- (void)handleZoomEnd;
- (BOOL)processZoomWithDeltaX:(CGFloat)deltaX deltaY:(CGFloat)deltaY anchorX:(CGFloat)anchorX anchorY:(CGFloat)anchorY SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)handleGlobalTap:(CGPoint)location SWIFT_WARN_UNUSED_RESULT;
- (void)keepInBoundaries;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11SwiftCharts21ChartCoordsSpaceLayer")
@interface ChartCoordsSpaceLayer : ChartLayerBase
- (CGPoint)modelLocToScreenLocWithX:(double)x y:(double)y SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)modelLocToScreenLocWithX:(double)x SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)modelLocToScreenLocWithY:(double)y SWIFT_WARN_UNUSED_RESULT;
- (CGPoint)modelLocToContainerScreenLocWithX:(double)x y:(double)y SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)modelLocToContainerScreenLocWithX:(double)x SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)modelLocToContainerScreenLocWithY:(double)y SWIFT_WARN_UNUSED_RESULT;
- (CGPoint)modelLocToGlobalScreenLocWithX:(double)x y:(double)y SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)modelLocToGlobalScreenLocWithX:(double)x SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)modelLocToGlobalScreenLocWithY:(double)y SWIFT_WARN_UNUSED_RESULT;
- (double)scalarForScreenLocWithX:(CGFloat)x SWIFT_WARN_UNUSED_RESULT;
- (double)scalarForScreenLocWithY:(CGFloat)y SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SwiftCharts18ChartDividersLayer")
@interface ChartDividersLayer : ChartCoordsSpaceLayer
@end


@class UIBezierPath;
@class CAShapeLayer;

SWIFT_CLASS("_TtC11SwiftCharts14ChartLinesView")
@interface ChartLinesView : UIView
@property (nonatomic, readonly, strong) UIColor * _Nonnull lineColor;
@property (nonatomic, readonly) CGFloat lineWidth;
@property (nonatomic, readonly) float animDuration;
@property (nonatomic, readonly) float animDelay;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable dashPattern;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (CAShapeLayer * _Nonnull)generateLayerWithPath:(UIBezierPath * _Nonnull)path SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC11SwiftCharts21ChartPointEllipseView")
@interface ChartPointEllipseView : UIView
@property (nonatomic, strong) UIColor * _Nonnull fillColor;
@property (nonatomic, strong) UIColor * _Nullable borderColor;
@property (nonatomic) float animDelay;
@property (nonatomic) float animDuration;
@property (nonatomic) BOOL animateSize;
@property (nonatomic) BOOL animateAlpha;
@property (nonatomic) CGFloat animDamping;
@property (nonatomic) CGFloat animInitSpringVelocity;
@property (nonatomic, copy) void (^ _Nullable touchHandler)(void);
- (nonnull instancetype)initWithCenter:(CGPoint)center diameter:(CGFloat)diameter;
- (nonnull instancetype)initWithCenter:(CGPoint)center width:(CGFloat)width height:(CGFloat)height OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
- (void)drawRect:(CGRect)rect;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SwiftCharts23ChartPointTargetingView")
@interface ChartPointTargetingView : UIView
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SwiftCharts24ChartPointTextCircleView")
@interface ChartPointTextCircleView : UILabel
@property (nonatomic, copy) void (^ _Nullable viewTapped)(ChartPointTextCircleView * _Nonnull);
@property (nonatomic) BOOL selected;
- (void)didMoveToSuperview;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SwiftCharts17ChartPointViewBar")
@interface ChartPointViewBar : UIView
@property (nonatomic, readonly) CGRect targetFrame;
@property (nonatomic) BOOL isSelected;
@property (nonatomic, copy) void (^ _Nullable tapHandler)(ChartPointViewBar * _Nonnull);
@property (nonatomic, readonly) BOOL isHorizontal;
+ (CGRect)frame:(CGPoint)p1 p2:(CGPoint)p2 width:(CGFloat)width SWIFT_WARN_UNUSED_RESULT;
- (void)updateFrame:(CGPoint)p1 p2:(CGPoint)p2;
- (void)enableTap;
- (void)onTap:(UITapGestureRecognizer * _Nonnull)sender;
- (void)toggleSelection;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11SwiftCharts24ChartPointViewBarGreyOut")
@interface ChartPointViewBarGreyOut : ChartPointViewBar
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
@end


SWIFT_CLASS("_TtC11SwiftCharts24ChartPointViewBarStacked")
@interface ChartPointViewBarStacked : ChartPointViewBar
- (void)onTap:(UITapGestureRecognizer * _Nonnull)sender;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
@end



SWIFT_CLASS("_TtC11SwiftCharts13HandlingLabel")
@interface HandlingLabel : UILabel
@property (nonatomic, copy) void (^ _Nullable movedToSuperViewHandler)(void);
@property (nonatomic, copy) void (^ _Nullable touchHandler)(void);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_CLASS("_TtC11SwiftCharts12HandlingView")
@interface HandlingView : UIView
@property (nonatomic, copy) void (^ _Nullable movedToSuperViewHandler)(void);
@property (nonatomic, copy) void (^ _Nullable touchHandler)(void);
- (void)didMoveToSuperview;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11SwiftCharts10InfoBubble")
@interface InfoBubble : UIView
@property (nonatomic, readonly) CGFloat arrowWidth;
@property (nonatomic, readonly) CGFloat arrowHeight;
@property (nonatomic, readonly, strong) UIColor * _Nonnull bgColor;
@property (nonatomic, readonly) CGFloat arrowX;
@property (nonatomic, readonly) CGFloat arrowY;
@property (nonatomic, readonly) CGFloat minSuperviewPadding;
@property (nonatomic, readonly) CGFloat space;
@property (nonatomic, readonly) CGPoint point;
@property (nonatomic, copy) void (^ _Nullable tapHandler)(void);
@property (nonatomic, readonly) BOOL inverted;
@property (nonatomic, readonly) BOOL horizontal;
- (nonnull instancetype)initWithPoint:(CGPoint)point size:(CGSize)size superview:(UIView * _Nonnull)superview arrowHeight:(CGFloat)arrowHeight contentView:(UIView * _Nonnull)contentView bgColor:(UIColor * _Nonnull)bgColor minSuperviewPadding:(CGFloat)minSuperviewPadding space:(CGFloat)space horizontal:(BOOL)horizontal;
- (nonnull instancetype)initWithPoint:(CGPoint)point frame:(CGRect)frame arrowWidth:(CGFloat)arrowWidth arrowHeight:(CGFloat)arrowHeight contentView:(UIView * _Nullable)contentView bgColor:(UIColor * _Nonnull)bgColor space:(CGFloat)space minSuperviewPadding:(CGFloat)minSuperviewPadding arrowX:(CGFloat)arrowX arrowY:(CGFloat)arrowY horizontal:(BOOL)horizontal OBJC_DESIGNATED_INITIALIZER;
- (void)onTap:(UITapGestureRecognizer * _Nonnull)sender;
- (void)didMoveToSuperview;
- (BOOL)inverted:(UIView * _Nonnull)superview SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIFont;

@interface InfoBubble (SWIFT_EXTENSION(SwiftCharts))
- (nonnull instancetype)initWithPoint:(CGPoint)point preferredSize:(CGSize)preferredSize superview:(UIView * _Nonnull)superview arrowHeight:(CGFloat)arrowHeight text:(NSString * _Nonnull)text font:(UIFont * _Nonnull)font textColor:(UIColor * _Nonnull)textColor bgColor:(UIColor * _Nonnull)bgColor minSuperviewPadding:(CGFloat)minSuperviewPadding innerPadding:(CGFloat)innerPadding horizontal:(BOOL)horizontal;
@end




@interface UIColor (SWIFT_EXTENSION(SwiftCharts))
@property (nonatomic, readonly) CGFloat alpha;
- (UIColor * _Nonnull)adjustBrigtnessWithFactor:(CGFloat)brightnessFactor SWIFT_WARN_UNUSED_RESULT;
@end

SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
