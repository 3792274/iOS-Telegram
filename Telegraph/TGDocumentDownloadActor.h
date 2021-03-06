/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "ASActor.h"
#import "ASWatcher.h"
#import "TGPeerIdAdapter.h"

@protocol ASActorMessageLoadSuccess <NSObject>

-(void)ASActorMessageLoadSuccess;

@end

@interface TGDocumentDownloadActor : ASActor <ASWatcher>

@property (nonatomic, strong) ASHandle *actionHandle;


@end
