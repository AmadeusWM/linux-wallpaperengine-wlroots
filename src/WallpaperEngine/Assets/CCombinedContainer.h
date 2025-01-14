#pragma once

#include <vector>
#include <stdexcept>
#include <filesystem>

#include "CContainer.h"

namespace WallpaperEngine::Assets
{
    class CCombinedContainer : public CContainer
    {
    public:
		CCombinedContainer ();

        /**
         * Adds a container to the list
         *
         * @param container
         */
        void add (CContainer* container);
        void addPkg (const std::filesystem::path& path);

        const void* readFile (std::string filename, uint32_t* length = nullptr) const override;

    private:
        std::vector<CContainer*> m_containers;
    };
};