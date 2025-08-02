#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SyncManager class.
/// [`SyncManager`](https://developer.mozilla.org/en-US/docs/Web/API/SyncManager)
class SyncManager : public emlite::Val {
    explicit SyncManager(Handle h) noexcept;

public:
    explicit SyncManager(const emlite::Val &val) noexcept;
    static SyncManager take_ownership(Handle h) noexcept;

    [[nodiscard]] SyncManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The register method.
    /// [`SyncManager.register`](https://developer.mozilla.org/en-US/docs/Web/API/SyncManager/register)
    jsbind::Promise<jsbind::Undefined> register_(const jsbind::String& tag);
    /// The getTags method.
    /// [`SyncManager.getTags`](https://developer.mozilla.org/en-US/docs/Web/API/SyncManager/getTags)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> getTags();
};

