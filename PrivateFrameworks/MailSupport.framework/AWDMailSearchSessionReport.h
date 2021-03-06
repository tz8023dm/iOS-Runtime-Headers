/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailSearchSessionReport : PBCodable <NSCopying> {
    NSMutableArray * _engagements;
    struct { 
        unsigned int messagesLeftToIndex : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _messagesLeftToIndex;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *engagements;
@property (nonatomic) BOOL hasMessagesLeftToIndex;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long messagesLeftToIndex;
@property (nonatomic) unsigned long long timestamp;

+ (Class)engagementsType;

- (void).cxx_destruct;
- (void)addEngagements:(id)arg1;
- (void)clearEngagements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engagements;
- (id)engagementsAtIndex:(unsigned int)arg1;
- (unsigned int)engagementsCount;
- (BOOL)hasMessagesLeftToIndex;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)messagesLeftToIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setEngagements:(id)arg1;
- (void)setHasMessagesLeftToIndex:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMessagesLeftToIndex:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
