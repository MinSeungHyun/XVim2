//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTSourceControlHostedAccount, DVTSourceControlRemoteRepository;

@interface IDESourceControlRepositoriesSearchAbstractViewController : DVTViewController
{
    DVTSourceControlRemoteRepository *_remoteRepository;
    DVTSourceControlHostedAccount *_remoteRepositoryHostedAccount;
}

@property(readonly, nonatomic) DVTSourceControlHostedAccount *remoteRepositoryHostedAccount; // @synthesize remoteRepositoryHostedAccount=_remoteRepositoryHostedAccount;
@property(readonly, nonatomic) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
- (void).cxx_destruct;
- (void)reloadDataSource;
- (void)setPackageFilter:(BOOL)arg1;
- (void)setSelectionUpdatedBlock:(CDUnknownBlockType)arg1;

@end

