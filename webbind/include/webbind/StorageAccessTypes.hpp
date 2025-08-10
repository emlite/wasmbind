#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type StorageAccessTypes
class StorageAccessTypes : public emlite::Val {
  explicit StorageAccessTypes(Handle h) noexcept;
public:
    static StorageAccessTypes take_ownership(Handle h) noexcept;
    explicit StorageAccessTypes(const emlite::Val &val) noexcept;
    StorageAccessTypes() noexcept;
    [[nodiscard]] StorageAccessTypes clone() const noexcept;
    /// Getter of the `all` attribute.
    [[nodiscard]] bool all() const;
    /// Setter of the `all` attribute.
    void all(bool value);
    /// Getter of the `cookies` attribute.
    [[nodiscard]] bool cookies() const;
    /// Setter of the `cookies` attribute.
    void cookies(bool value);
    /// Getter of the `sessionStorage` attribute.
    [[nodiscard]] bool sessionStorage() const;
    /// Setter of the `sessionStorage` attribute.
    void sessionStorage(bool value);
    /// Getter of the `localStorage` attribute.
    [[nodiscard]] bool localStorage() const;
    /// Setter of the `localStorage` attribute.
    void localStorage(bool value);
    /// Getter of the `indexedDB` attribute.
    [[nodiscard]] bool indexedDB() const;
    /// Setter of the `indexedDB` attribute.
    void indexedDB(bool value);
    /// Getter of the `locks` attribute.
    [[nodiscard]] bool locks() const;
    /// Setter of the `locks` attribute.
    void locks(bool value);
    /// Getter of the `caches` attribute.
    [[nodiscard]] bool caches() const;
    /// Setter of the `caches` attribute.
    void caches(bool value);
    /// Getter of the `getDirectory` attribute.
    [[nodiscard]] bool getDirectory() const;
    /// Setter of the `getDirectory` attribute.
    void getDirectory(bool value);
    /// Getter of the `estimate` attribute.
    [[nodiscard]] bool estimate() const;
    /// Setter of the `estimate` attribute.
    void estimate(bool value);
    /// Getter of the `createObjectURL` attribute.
    [[nodiscard]] bool createObjectURL() const;
    /// Setter of the `createObjectURL` attribute.
    void createObjectURL(bool value);
    /// Getter of the `revokeObjectURL` attribute.
    [[nodiscard]] bool revokeObjectURL() const;
    /// Setter of the `revokeObjectURL` attribute.
    void revokeObjectURL(bool value);
    /// Getter of the `BroadcastChannel` attribute.
    [[nodiscard]] bool BroadcastChannel_() const;
    /// Setter of the `BroadcastChannel` attribute.
    void BroadcastChannel_(bool value);
    /// Getter of the `SharedWorker` attribute.
    [[nodiscard]] bool SharedWorker_() const;
    /// Setter of the `SharedWorker` attribute.
    void SharedWorker_(bool value);
};

} // namespace webbind