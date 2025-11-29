// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AuraPlayerState.h"

AAuraPlayerState::AAuraPlayerState()
{
	//每秒100次 server像client同步数据
	SetNetUpdateFrequency(100.0f);
	
	// deprecated
	// NetUpdateFrequency = 100.0f;
}
