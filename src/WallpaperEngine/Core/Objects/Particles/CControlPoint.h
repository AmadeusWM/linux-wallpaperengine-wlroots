#pragma once

#include "WallpaperEngine/Core/Core.h"

namespace WallpaperEngine::Core::Objects::Particles
{
    using json = nlohmann::json;

    class CControlPoint
    {
    public:
        static CControlPoint* fromJSON (json data);

		uint32_t getId () const;
        const glm::vec3& getOffset () const;
        uint32_t getFlags () const;
    protected:
        explicit CControlPoint (uint32_t id, uint32_t flags = 0);

        void setOffset (const glm::vec3& offset);
        void setFlags (uint32_t flags);
    private:
        uint32_t m_id;
        uint32_t m_flags;
        glm::vec3 m_offset;
    };
}
