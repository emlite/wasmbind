#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Worklet.hpp"

namespace webbind {

class SharedStorageUrlWithMetadata;
class SharedStorageRunOperationMethodOptions;

/// Interface SharedStorageWorklet
/// [`SharedStorageWorklet`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet)
class SharedStorageWorklet : public Worklet {
    explicit SharedStorageWorklet(Handle h) noexcept;
public:
    explicit SharedStorageWorklet(const emlite::Val &val) noexcept;
    static SharedStorageWorklet take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedStorageWorklet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The selectURL method.
    /// [`SharedStorageWorklet.selectURL`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/selectURL)
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls);
    /// The selectURL method.
    /// [`SharedStorageWorklet.selectURL`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/selectURL)
    jsbind::Promise<jsbind::Any> selectURL(const jsbind::String& name, const jsbind::TypedArray<SharedStorageUrlWithMetadata>& urls, const SharedStorageRunOperationMethodOptions& options);
    /// The run method.
    /// [`SharedStorageWorklet.run`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/run)
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name);
    /// The run method.
    /// [`SharedStorageWorklet.run`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorklet/run)
    jsbind::Promise<jsbind::Any> run(const jsbind::String& name, const SharedStorageRunOperationMethodOptions& options);
};

} // namespace webbind