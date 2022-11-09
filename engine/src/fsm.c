// ____________________________
// ██▀▀█▀▀██▀▀▀▀▀▀▀█▀▀█        │  ▄▄▄▄  ▄▄▄  ▄ ▄
// ██  ▀  █▄  ▀██▄ ▀ ▄█ ▄▀▀ █  │  ██▄  ▀█▄  ██▀█
// █  █ █  ▀▀  ▄█  █  █ ▀▄█ █▄ │  ██   ▄▄█▀ ██ █
// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀────────┘
//  by Guillaume 'Aoineko' Blanchard under CC BY-SA license
//─────────────────────────────────────────────────────────────────────────────
// Finite State Machine
//─────────────────────────────────────────────────────────────────────────────
#include "fsm.h"

//=============================================================================
// READ-ONLY DATA
//=============================================================================

//=============================================================================
// MEMORY DATA
//=============================================================================

FSM_State* g_PrevState = NULL;
FSM_State* g_CurrentState = NULL;

//=============================================================================
// FUNCTIONS
//=============================================================================

//-----------------------------------------------------------------------------
// Set current state and handle transition
void FSM_SetState(FSM_State* state)
{
	// End previous state
	if(g_CurrentState && g_CurrentState->End)
		g_CurrentState->End();
	g_PrevState = g_CurrentState;

	// Start next state
	g_CurrentState = state;
	if(g_CurrentState->Begin);
		g_CurrentState->Begin();
}