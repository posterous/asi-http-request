//
//  ASIHTTPRequestConfig.h
//  Part of ASIHTTPRequest -> http://allseeing-i.com/ASIHTTPRequest
//
//  Created by Ben Copsey on 14/12/2009.
//  Copyright 2009 All-Seeing Interactive. All rights reserved.
//


// ======
// Debug output configuration options
// ======
#ifndef DEBUG
#define DEBUG 0
#endif

// When set to 1 ASIHTTPRequests will print information about what a request is doing
#ifndef DEBUG_REQUEST_STATUS
	#define DEBUG_REQUEST_STATUS DEBUG
#endif

// When set to 1, ASIFormDataRequests will print information about the request body to the console
#ifndef DEBUG_FORM_DATA_REQUEST
	#define DEBUG_FORM_DATA_REQUEST DEBUG
#endif

// When set to 1, ASIHTTPRequests will print information about bandwidth throttling to the console
#ifndef DEBUG_THROTTLING
	#define DEBUG_THROTTLING DEBUG
#endif

// When set to 1, ASIHTTPRequests will print information about persistent connections to the console
#ifndef DEBUG_PERSISTENT_CONNECTIONS
	#define DEBUG_PERSISTENT_CONNECTIONS DEBUG
#endif
