#pragma once

#include "WallpaperEngine/Core/Objects/Particles/CInitializer.h"

#include "WallpaperEngine/Core/Core.h"

namespace WallpaperEngine::Core::Objects::Particles::Initializers
{
    class CLifeTimeRandom : CInitializer
    {
    public:
        uint32_t getMinimum () const;
        uint32_t getMaximum () const;
    protected:
        friend class CInitializer;

        static CLifeTimeRandom* fromJSON (json data, uint32_t id);

        CLifeTimeRandom (uint32_t id, uint32_t min, uint32_t max);
    private:
        uint32_t m_max;
        uint32_t m_min;
    };
}
