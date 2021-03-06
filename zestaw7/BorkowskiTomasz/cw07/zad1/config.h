#ifndef CONFIGURATION
#define CONFIGURATION

#define TASKS_LENGTH 10
#define SEM_EMPTY 0
#define SEM_FULL 1

union semun {
	int              val;    /* Value for SETVAL */
	struct semid_ds *buf;    /* Buffer for IPC_STAT, IPC_SET */
	unsigned short  *array;  /* Array for GETALL, SETALL */
	struct seminfo  *__buf;  /* Buffer for IPC_INFO */
};


#endif
