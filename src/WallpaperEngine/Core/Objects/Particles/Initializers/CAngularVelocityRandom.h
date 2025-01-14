#pragma once

#include "WallpaperEngine/Core/Objects/Particles/CInitializer.h"

#include "WallpaperEngine/Core/Core.h"

namespace WallpaperEngine::Core::Objects::Particles::Initializers
{
    class CAngularVelocityRandom : CInitializer
    {
    public:
        const glm::vec3& getMinimum () const;
        const glm::vec3& getMaximum () const;
    protected:
        friend class CInitializer;

        static CAngularVelocityRandom* fromJSON (json data, uint32_t id);

        CAngularVelocityRandom (uint32_t id, glm::vec3 min, glm::vec3 max);
    private:
        glm::vec3 m_max;
        glm::vec3 m_min;
    };
}
