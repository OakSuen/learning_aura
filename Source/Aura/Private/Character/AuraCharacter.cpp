// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

AAuraCharacter::AAuraCharacter()
{
	// 启用角色朝向移动方向旋转
	// 当角色移动时，会自动转身面向前进的方向，而不是始终面向摄像机的方向
	GetCharacterMovement()->bOrientRotationToMovement = true;

	// 设置旋转速率
	// 这里只设置了 Yaw (Z轴) 的旋转速度为 400 度/秒，决定了角色转身的快慢
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 400.0f, 0.0f);

	// 将角色移动限制在平面上
	// 防止角色在移动时意外离开所在的水平面（例如用于 2.5D 或俯视角游戏）
	GetCharacterMovement()->bConstrainToPlane = true;

	// 在开始时将角色吸附到平面上
	// 确保游戏开始时角色紧贴地面/平面
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// 禁用控制器（Controller）对角色旋转的直接控制
	// 因为我们要让角色朝向移动方向（上面的 bOrientRotationToMovement），
	// 所以这里不让摄像机/控制器的视角方向强行改变角色的朝向。
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}
