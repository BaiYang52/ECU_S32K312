#ifndef OS_TYPES_H_
#define OS_TYPES_H_


/* Type definition of OS resources. */
typedef uint16          Os_ResourceType;
typedef Os_ResourceType ResourceType;

#define     RES_SCHEDULER_CORE0                   	((Os_ResourceType)0x0000U)

/* Type definition of the App mode. */
typedef uint16         Os_AppModeType;
typedef Os_AppModeType AppModeType;
/* The type definition of the Application. */
typedef uint16 Os_ApplicationType;

/* This data type identifies the OS-Application. */
typedef Os_ApplicationType ApplicationType;


#endif