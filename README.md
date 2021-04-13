# ControlWork-1 ![GITHUB-BADGE](https://github.com/Fe-Ti/ControlWork-1/workflows/CI/badge.svg?branch=master&event=push)

##Сборка:
Конфигурация:
```
cmake -H. -B_build [OPTIONS]
```
| OPTIONS     | Значение               |
|-------------|------------------------|
|`DBUILD_TEST`| Включение тестирования |
|`BUILD_DEMO` | Включение демонстрации |

Сборка (цели):
```
cmake --build _build [--target <sqrt_lib|demo|check>]
```
