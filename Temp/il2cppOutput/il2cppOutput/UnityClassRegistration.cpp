struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 77 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//11. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//12. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//13. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//18. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//27. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//32. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//33. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//34. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//35. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//36. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//37. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//38. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//39. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//40. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//41. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//42. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//43. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//44. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//45. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//50. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//51. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//52. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//53. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//54. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//55. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//56. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//57. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//58. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//59. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//60. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//61. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//62. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//63. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//64. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//65. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//66. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//67. Projector
	void RegisterClass_Projector();
	RegisterClass_Projector();

	//68. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//69. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//70. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//71. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//72. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//73. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//74. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//75. Tree
	void RegisterClass_Tree();
	RegisterClass_Tree();

	//76. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
