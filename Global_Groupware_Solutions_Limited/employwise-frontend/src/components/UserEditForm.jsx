import React, { useState, useEffect } from "react";
import { updateUser, fetchUsers } from "../utils/api";
import { useParams, useNavigate } from "react-router-dom";

const UserEditForm = () => {
  const [user, setUser] = useState({ first_name: "", last_name: "", email: "" });
  const { id } = useParams();
  const navigate = useNavigate();

  useEffect(() => {
    const loadUser = async () => {
      const { data } = await fetchUsers(1); // Assuming users are on page 1
      const currentUser = data.data.find((u) => u.id === parseInt(id));
      setUser(currentUser);
    };
    loadUser();
  }, [id]);

  const handleUpdate = async (e) => {
    e.preventDefault();
    try {
      await updateUser(id, user);
      alert("User updated successfully");
      navigate("/users");
    } catch (err) {
      console.error("Failed to update user", err);
    }
  };

  return (
    <div>
      <h2>Edit User</h2>
      <form onSubmit={handleUpdate}>
        <div>
          <label>First Name:</label>
          <input
            type="text"
            value={user.first_name}
            onChange={(e) =>
              setUser({ ...user, first_name: e.target.value })
            }
            required
          />
        </div>
        <div>
          <label>Last Name:</label>
          <input
            type="text"
            value={user.last_name}
            onChange={(e) =>
              setUser({ ...user, last_name: e.target.value })
            }
            required
          />
        </div>
        <div>
          <label>Email:</label>
          <input
            type="email"
            value={user.email}
            onChange={(e) => setUser({ ...user, email: e.target.value })}
            required
          />
        </div>
        <button type="submit">Update</button>
      </form>
    </div>
  );
};

export default UserEditForm;
