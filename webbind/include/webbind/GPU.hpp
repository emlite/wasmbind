#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUAdapter;
class GPURequestAdapterOptions;
class WGSLLanguageFeatures;


class GPURequestAdapterOptions : public emlite::Val {
  explicit GPURequestAdapterOptions(Handle h) noexcept;
public:
    static GPURequestAdapterOptions take_ownership(Handle h) noexcept;
    explicit GPURequestAdapterOptions(const emlite::Val &val) noexcept;
    GPURequestAdapterOptions() noexcept;
    GPURequestAdapterOptions clone() const noexcept;
    jsbind::DOMString featureLevel() const;
    void featureLevel(const jsbind::DOMString& value);
    GPUPowerPreference powerPreference() const;
    void powerPreference(const GPUPowerPreference& value);
    bool forceFallbackAdapter() const;
    void forceFallbackAdapter(bool value);
    bool xrCompatible() const;
    void xrCompatible(bool value);
};

class GPU : public emlite::Val {
    explicit GPU(Handle h) noexcept;

public:
    explicit GPU(const emlite::Val &val) noexcept;
    static GPU take_ownership(Handle h) noexcept;

    GPU clone() const noexcept;
    jsbind::Promise<GPUAdapter> requestAdapter();
    jsbind::Promise<GPUAdapter> requestAdapter(const GPURequestAdapterOptions& options);
    GPUTextureFormat getPreferredCanvasFormat();
    WGSLLanguageFeatures wgslLanguageFeatures() const;
};

