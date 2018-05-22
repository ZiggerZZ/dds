/*
   DDS, a bridge double dummy solver.

   Copyright (C) 2006-2014 by Bo Haglund /
   2014-2018 by Bo Haglund & Soren Hein.

   See LICENSE and README.
*/

#ifndef DDS_THREADMGR_H
#define DDS_THREADMGR_H

#include <vector>

using namespace std;


class ThreadMgr
{
  private:

    vector<bool> realThreads;
    vector<int> machineThreads;
    int numRealThreads;
    int numMachineThreads;

  public:

    ThreadMgr();

    ~ThreadMgr();

    void Reset(const int nThreads);

    int Occupy(const int MachineThrId);

    bool Release(const int MachineThrId);

    void Print(
      const string& fname,
      const string& tag) const;
};

#endif
