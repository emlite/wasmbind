#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MLContext;
class GPUDevice;


class ML : public emlite::Val {
    explicit ML(Handle h) noexcept;

public:
    explicit ML(const emlite::Val &val) noexcept;
    static ML take_ownership(Handle h) noexcept;

    ML clone() const noexcept;
    jsbind::Promise createContext(const GPUDevice& gpuDevice);
};

