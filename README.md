<h1 align="center">Finite State Machine</h1>

> Developed in [GCC](https://gcc.gnu.org/)

<!-- ![Screenshot](./assets/FSM_Screenshot.png) -->
<p align="center">
    <img src="./assets/FSM_Screenshot.png" alt="Screenshot">
</p>

## Contents

-   [Project Configuration](#1-project-configuration)
-   [Features](#2-features)
-   [Usage](#3-usage)
-   [Class Diagram](#4-class-diagram)

---

### 1. Project Configuration

-   GCC: 14.0.0

### 2. Features

Navigates between states (`Menu`, `About`, `Exit`).

### 3. Usage

To compile and build the project:

```shell
$ make
```

After that, we can run the project:

```shell
$ make run

# or 

$ ./FSM
```

To clean or rebuild the project:

```shell
$ make clean; make

# or

$ make rebuild
```

### 4. Class Diagram

```mermaid
classDiagram
    class AState
        <<Abstract>> AState
        AState : -bool isFinished
        AState : -int nextState
        AState : +AState() constructor
        AState : +setIsFinished(bool) void
        AState : +getIsFinished() int
        AState : +setNextState(int) void
        AState : +getNextState() int
        AState : +update()* virtual
        AState : +render()* virtual

    class CMenu
        CMenu : +CMenu() constructor
        CMenu : +update() virtual override
        CMenu : +render() virtual override

    class CAbout
        CAbout : +CAbout() constructor
        CAbout : +update() virtual override
        CAbout : +render() virtual override

    class CStateManager
        CStateManager : -bool isRunning
        CStateManager : -int state
        CStateManager : -CMenu menu
        CStateManager : -CAbout about
        CStateManager : +CStateManager() constructor
        CStateManager : +setIsRunning(bool) void
        CStateManager : +getIsRunning() int
        CStateManager : +setState(int) void
        CStateManager : +getState() int
        CStateManager : +runState() void
        CStateManager : +updateState() void
        CStateManager : +exitState() void

    CMenu --|> AState: inherits
    CAbout --|> AState: inherits

    CStateManager --> CMenu: implements
    CStateManager --> CAbout: implements
```
