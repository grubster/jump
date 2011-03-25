/*
 * copyright (c) 2011 - SEQOY.org and Paulo Oliveira ( http://www.seqoy.org )
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#import <Foundation/Foundation.h>
#import "JPLoggerInterface.h"

/**
 * Rich Information about an log.
 */
@interface JPLoggerMetadata : NSObject {
	id caller;
	
	NSString* message;
	
	NSString* fileName;
	NSString* className;
	NSString* methodName;
	NSNumber* lineNumber;
	NSException* exception;
	
	JPLoggerLevels logLevel;
	BOOL assertion;
}

////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
#pragma mark -
#pragma mark Properties.
////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 

/**
 * Filename that generate the log.
 */
@property(copy)  NSString* fileName;

/**
 * Object that call the log.
 */
@property(retain) id caller;

/**
 * Class that generate the log.
 */
@property(copy)  NSString* className;

/**
 * Method that generate the log.
 */
@property(copy)  NSString* methodName;

/**
 * Line number that generate the log.
 */
@property(copy)  NSNumber* lineNumber;

/**
 * Exception associated with this log.
 */
@property(retain)  NSException* exception;

/**
 * Log level.
 */
@property(assign)  JPLoggerLevels logLevel;

/**
 * Log was generated by an assertion.
 */
@property(assign, getter=isAssertion) BOOL assertion;

/**
 * Log message.
 */
@property(readonly)  NSString* message;

////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
#pragma mark -
#pragma mark Init Methods.
////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
/** @name Init Methods
 */
///@{ 

/**
 * Init an empty object.
 * @return An autoreleseable instance.
 */
+(id)init;

/**
 * Init with an message.
 * @param variableList An format string, and his paramteres. Similar to <tt>[NSString stringWithFormat:]</tt> method.
 * @return An autoreleseable instance.
 */ 
+(id)initWithMessage:(id)variableList, ...;

///@}
////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
#pragma mark -
#pragma mark Set Methods.
////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
/** @name Set Methods
 */
///@{ 

/**
 * Set this log message.
 * @param variableList An format string, and his paramteres. Similar to <tt>[NSString stringWithFormat:]</tt> method.
 */ 
-(void)setMessage:(id)variableList, ...;

/**
 * Validate current metadata. 
 * <tt>nil</tt> values are replaced with <tt>"Unknown"</tt> string.
 */
-(void)validate;

///@}
////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
#pragma mark -
#pragma mark Get Methods.
////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// ////////// 
/** @name Retrieve Methods
 */
///@{ 

/**
 * Return formatted method and class name.<br>
 * <b>Example:</b><tt>[object class:]</tt>
 */
-(NSString*)prettyMethod;

///@}
@end