// declaras la syscall
uint64_t dummy_syscall(uint64_t x);

int main() {
  uint64_t result;

  // llamas a la syscall dummy con 100
  result = dummy_syscall(100);

  // regresas el resultado como exit code
  return result;
}
