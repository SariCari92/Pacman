#include "MiniginPCH.h"
#include "InputComponentPacman.h"
#include "InputManager.h"
#include "Commands.h"

InputComponentPacMan::InputComponentPacMan()
{

}
InputComponentPacMan::InputComponentPacMan(int controllerId)
	:InputComponent(controllerId)
{
	InitializeCommandConfiguration();
}
InputComponentPacMan::~InputComponentPacMan()
{

}
void InputComponentPacMan::LateUpdate()
{

}
void InputComponentPacMan::InitializeCommandConfiguration()
{
	InputManager &inputManager = InputManager::GetInstance();
	inputManager.SetGamepadUpCommand(m_ControllerId, std::shared_ptr<Command>(new MoveUpCommand()));
	inputManager.SetGamepadDownCommand(m_ControllerId, std::shared_ptr<Command>(new MoveDownCommand()));
	inputManager.SetGamepadLeftCommand(m_ControllerId, std::shared_ptr<Command>(new MoveLeftCommand()));
	inputManager.SetGamepadRightCommand(m_ControllerId, std::shared_ptr<Command>(new MoveRightCommand()));
}