﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3099937104;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t3768552235;
// UnityEngine.Transform
struct Transform_t224878301;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem3099937104.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel3768552235.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"

// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m2372735108 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3099937104 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Clear(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Clear_m661664011 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3099937104 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m4171585816 (ParticleSystem_t3099937104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1705837075 (ParticleSystem_t3099937104 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear()
extern "C"  void ParticleSystem_Clear_m550005313 (ParticleSystem_t3099937104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
extern "C"  void ParticleSystem_Clear_m4048064080 (ParticleSystem_t3099937104 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m1240416587 (ParticleSystem_t3099937104 * __this, bool ___recurse0, IteratorDelegate_t3768552235 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m3260878897 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___transform0, IteratorDelegate_t3768552235 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__1_m2323492138 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3099937104 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Clear>m__4(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CClearU3Em__4_m4140075282 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3099937104 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
