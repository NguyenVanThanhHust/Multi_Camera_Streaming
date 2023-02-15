#include <cstdint>
#include <utility>

namespace MCT {

/*
Interface for data exchange
It represents memory object CPU or GPU
*/
class Token {
public:
  Token &operator=(const Token &other) = delete;
  Token(const Token &other) = delete;

  virtual ~Token();

protected:
  Token();
};

enum class TaskExecStatus { TASK_EXEC_SUCCESS, TASK_EXEC_FAIL};

/*
Synchronization call which will be done after a blocking task;
*/
typedef void (*p_sync_call)(void *p_args);

/*

*/


}