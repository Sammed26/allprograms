import React, { useEffect, useState } from "react";
import { fetchUsers, deleteUser } from "../utils/api";
import { useNavigate } from "react-router-dom";

const UsersList = () => {
  const [users, setUsers] = useState([]);
  const [page, setPage] = useState(1);
  const navigate = useNavigate();

  useEffect(() => {
    const loadUsers = async () => {
      try {
        const { data } = await fetchUsers(page);
        setUsers(data.data);
      } catch (err) {
        console.error("Failed to fetch users", err);
      }
    };
    loadUsers();
  }, [page]);

  const handleDelete = async (id) => {
    try {
      await deleteUser(id);
      setUsers(users.filter((user) => user.id !== id));
    } catch (err) {
      console.error("Failed to delete user", err);
    }
  };

  return (
    <div>
      <h2>Users List</h2>
      <div>
        {users.map((user) => (
          <div key={user.id}>
            <img src={user.avatar} alt={`${user.first_name} avatar`} />
            <p>{`${user.first_name} ${user.last_name}`}</p>
            <button onClick={() => navigate(`/edit/${user.id}`)}>Edit</button>
            <button onClick={() => handleDelete(user.id)}>Delete</button>
          </div>
        ))}
      </div>
      <button onClick={() => setPage((prev) => Math.max(prev - 1, 1))}>
        Previous
      </button>
      <button onClick={() => setPage((prev) => prev + 1)}>Next</button>
    </div>
  );
};

export default UsersList;
