#ifndef SYNC_H
#define SYNC_H

void executionTime(struct timeval t1,struct timeval t2);
void threadCreate(int numthreads, void* function);
void initLock(char* syncstrat);
void lock(char rw);
void unlock();


#endif /* SYNC_H */