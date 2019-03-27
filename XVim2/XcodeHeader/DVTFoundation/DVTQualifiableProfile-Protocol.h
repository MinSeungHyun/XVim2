//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSSet, NSString;

@protocol DVTQualifiableProfile
@property(readonly) BOOL isActive;
@property(readonly) BOOL isExpired;
@property(readonly) NSDate *dateExpired;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSSet *platforms;
@property(readonly) NSString *teamName;
@property(readonly) NSString *teamID;
@property(readonly) NSString *name;
- (BOOL)isXcodeManaged;
- (BOOL)matchesBundleIdentifier:(NSString *)arg1;

@optional
- (BOOL)isAppleInternal;
@end
