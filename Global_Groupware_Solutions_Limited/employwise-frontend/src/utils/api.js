import axios from "axios";

const API = axios.create({
  baseURL: "https://reqres.in/api",
});

export const login = (credentials) => API.post("/login", credentials);
export const fetchUsers = (page) => API.get(`/users?page=${page}`);
export const updateUser = (id, userData) => API.put(`/users/${id}`, userData);
export const deleteUser = (id) => API.delete(`/users/${id}`);
