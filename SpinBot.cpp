if (SpinBotUwU)
{
      auto Mesh = read<uint64_t>(settings::LocalPawn + 0x310);
      static auto Cached = read<Vector3>(Mesh + 0x140);
       if (SonyDriverHelper::api::GetKey(VK_LBUTTON)) {
     Writee<Vector3>(Mesh + 0x140, Vector3(1, rand() % 361, 1));
    }
    else Writee<Vector3>(Mesh + 0x140, Cached);
}