#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MLContext;
class GPUDevice;


/// The ML class.
/// [`ML`](https://developer.mozilla.org/en-US/docs/Web/API/ML)
class ML : public emlite::Val {
    explicit ML(Handle h) noexcept;

public:
    explicit ML(const emlite::Val &val) noexcept;
    static ML take_ownership(Handle h) noexcept;

    [[nodiscard]] ML clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createContext method.
    /// [`ML.createContext`](https://developer.mozilla.org/en-US/docs/Web/API/ML/createContext)
    jsbind::Promise<MLContext> createContext(const GPUDevice& gpuDevice);
};

